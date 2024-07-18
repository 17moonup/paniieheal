from PIL import Image
import numpy as np
import colorsys
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt

""
def get_dominant_color(image_path, k=1):
    image = Image.open(image_path)
    image = image.convert('RGB')  # 确保图像是 RGB 模式

    # 将图像转换为 numpy 数组
    image_np = np.array(image)

    # 重塑数组为 (num_pixels, 3)
    pixels = image_np.reshape(-1, 3)

    # 使用 KMeans 聚类
    kmeans = KMeans(n_clusters=k)
    kmeans.fit(pixels)

    # 获取主要颜色
    dominant_color = kmeans.cluster_centers_[0]
    return dominant_color

def hex_to_rgb(hex_color):
    hex_color = hex_color.lstrip('#')
    return tuple(int(hex_color[i:i+2], 16) for i in (0, 2, 4))

def rgb_to_hex(rgb_color):
    return '#{:02x}{:02x}{:02x}'.format(int(rgb_color[0]), int(rgb_color[1]), int(rgb_color[2])) 

def rgb_to_hsv(rgb_color):
    return colorsys.rgb_to_hsv(rgb_color[0]/255.0, rgb_color[1]/255.0, rgb_color[2]/255.0)

def hsv_to_rgb(hsv_color):
    return tuple(int(i * 255) for i in colorsys.hsv_to_rgb(hsv_color[0], hsv_color[1], hsv_color[2]))

def get_complementary_color(rgb_color):
    hsv_color = rgb_to_hsv(rgb_color)
    complementary_hue = (hsv_color[0] + 0.5) % 1.0
    complementary_color = hsv_to_rgb((complementary_hue, hsv_color[1], hsv_color[2]))
    return complementary_color

def get_analogous_colors(rgb_color):
    hsv_color = rgb_to_hsv(rgb_color)
    analogous_hues = [(hsv_color[0] + angle) % 1.0 for angle in (-1/12.0, 1/12.0)]
    analogous_colors = [hsv_to_rgb((hue, hsv_color[1], hsv_color[2])) for hue in analogous_hues]
    return analogous_colors

def plot_colors(colors):
    plt.figure(figsize=(8, 2))
    for i, color in enumerate(colors):
        plt.subplot(1, len(colors), i + 1)
        plt.imshow([[color]])
        plt.axis('off')
    plt.show()


if __name__ == "__main__":
    image_path = 'img/film/callmebyyourname.jpg'

    dominant_color_rgb = get_dominant_color(image_path)
    complementary_color = get_complementary_color(dominant_color_rgb)
    analogous_colors = get_analogous_colors(dominant_color_rgb)

    print(f"Dominant color: {dominant_color_rgb}")
    print(f"Complementary color: {complementary_color}")
    print(f"Analogous colors: {analogous_colors}")
    # 显示主要颜色
    plot_colors([dominant_color_rgb, complementary_color] + analogous_colors)

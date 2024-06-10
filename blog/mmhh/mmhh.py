import os
import markdown
import argparse
from jinja2 import Environment, FileSystemLoader

parser = argparse.ArgumentParser(description="test")
parser.add_argument('input', type=str, help='Input file')

args = parser.parse_args()

filename = args.input

source_dir = '../book/'
output_dir = '../../post/book/'
template_dir = 'templates'

env = Environment(loader=FileSystemLoader(template_dir))

with open(os.path.join(source_dir, filename), 'r') as file:
    markdown_content = file.read()

html_content = markdown.markdown(markdown_content)

template = env.get_template('book.html')

output_html = template.render(content=html_content)

output_path = os.path.join(output_dir, os.path.splitext(filename)[0] + '.html')

with open(output_path, 'w') as file:
    file.write(output_html)

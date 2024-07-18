/* rotate-photo*/
/*let imgContainer = document.getElementById("rotate-me");
let imgElement = imgContainer.querySelector('img');

imgElement.onclick = function() {
	let mySrc = imgElement.getAttribute("src");
	if (mySrc === "img/5t5.jpg") {
		imgElement.setAttribute("src", "img/kkx.png");
	} else {
		imgElement.setAttribute("src", "img/5t5.jpg");
	}
};
*/
/*
 * 1.click to trigger the anima.(js)
 * 2.fill & filp to the details side.(css + js)
 * 3.click again to initial.(js)
 */

window.onload = function() {
	var card = document.getElementsByClassName('card');
	for (var i = 0; i < card.length; i++) {
	  card[i].onclick = function() {
		this.classList.toggle('flipped');
		};
	}
}
        document.addEventListener('DOMContentLoaded', function() {
            var colorThief = new ColorThief();
            var img = document.getElementById('targetImage');
            
            if (img) {
                // 确保图片已经加载完成
                if (img.complete) {
                    applyMainColor(img);
                } else {
                    img.addEventListener('load', function() {
                        applyMainColor(img);
                    });
                }
            } else {
            }

            function applyMainColor(image) {
                try {
                    var mainColor = colorThief.getColor(image);
                    var colorDisplayDiv = document.getElementById('colorDisplay');
                    var rgbColor = 'rgb(' + mainColor.join(',') + ')';
                    colorDisplayDiv.style.backgroundColor = rgbColor;
                    console.log('Main color applied:', rgbColor);
                } catch (e) {
                    console.error('Error applying main color:', e);
                }
            }
        });

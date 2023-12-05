/*
 * 1.click to trigger the anima.(js)
 * 2.fill & filp to the details side.(css + js)
 * 3.click again to initial.(js)
*/

/* rotate-photo*/
let imgcontainer = document.getElementById("rotate-me");
let imgElement = imgcontainer.querySelector('img');

imgElement.onclick = function() {
	let mySrc = imgElement.getAttribute("src");
	if (mySrc === "img/5t5.jpg") {
		imgElement.setAttribute("src", "img/kkx.png");
	} else {
		imgElement.setAttribute("src", "img/5t5.jpg");
	}
};
 
const image = document.getElementById('image');

image.addEventListener('click', function() {
 image.style.animationPlayState = 'running';
  });

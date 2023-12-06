/* rotate-photo*/
let imgContainer = document.getElementById("rotate-me");
let imgElement = imgContainer.querySelector('img');

imgElement.onclick = function() {
	let mySrc = imgElement.getAttribute("src");
	if (mySrc === "img/5t5.jpg") {
		imgElement.setAttribute("src", "img/kkx.png");
	} else {
		imgElement.setAttribute("src", "img/5t5.jpg");
	}
};

/*
 * 1.click to trigger the anima.(js)
 * 2.fill & filp to the details side.(css + js)
 * 3.click again to initial.(js)
*/

const fillflip = document.querySelector('.boxes');

fillflip.addEventListener('click', function(event) {
	const target = event.target;
	if (target.classList.contains('image')) {
		target.classList.toggle('enlarged');
		target.closest('.boxpreview').classList.toggle('flipped');
	}
});


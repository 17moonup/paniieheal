function flipBox() {
  var box1 = document.getElementsByClassName('box')[0];
  var box2 = document.getElementsByClassName('box')[1];

  box1.classList.toggle('flipped');
  box2.classList.toggle('flipped');
}

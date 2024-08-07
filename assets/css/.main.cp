/*@author: 17moonup
  https://google.github.io/styleguide/htmlcssguide.html
  https://cloud.tencent.com/developer/article/1835320
  https://blog.csdn.net/weixin_43883485/article/details/103504171
  https://alienzhou.github.io/fe-performance-journey/5-subresources/css.html#_4-%E8%A7%A3%E6%9E%90%E4%B8%8E%E6%B8%B2%E6%9F%93%E6%A0%91%E6%9E%84%E5%BB%BA */
					/*通用樣式*/
html {
  background-color: #f4f4f2;
}

body {
  margin: 0 57px;
  font-family: 'Noto Serif TC', serif;
  /*font-family: 'Rosarivo', cursive;*/
  font-family: 'Ubuntu', sans-serif;
  background-color: #f4f4f2;
  /*font-family: 'Ubuntu Mono', monospace;*/
}

a {
  color: #40394a;
  text-decoration: none;
  }
					/*網站標題*/
.title {
  display: block;
  position: fixed;
  z-index: 999;
  margin: auto;
  top: 0;
  left: 0;
  right: 0;
  width: 100%;
  font-family: "Rosarivo";
  text-align: center;
  background-color: #F4F4F2;
}
					/*分割欄*/
.b-one {/*color design rule: weightful but not like black*/ 
  text-align: center;
  text-shadow: 1px 1px 3px white;
  font-size: 1.7em;
  margin: 63px auto 30px auto;
  padding: .5ex .5em;
  color: #F8F4E1;/*weightful but not like black*/
  background-color: #222831;
}

.b-two {
  margin: 30px auto;
  padding: .5ex .5em;
  font-family: 'Rosarivo', cursive;
  font-size: 1.7em;
  color: #F8F4E1;
  background-color: #454545;/*#4F709C*/;
}

.b-three { 
  text-align: right;
  text-shadow: 1px 1px 3px white;
  font-size: 1.7em;
  margin: 30px 0 0 0;
  padding: .5ex .5em;
  color: #F8F4E1;
  background-color: #454545;/*#BBBFCA;*/
}
					/*卡片樣式*/
.cards {
  flex-wrap: wrap;
  text-align: center;
  padding: 0;
}

.card {
  display: inline-block;
  position: relative;
  width: 470px;
  height: 530px;
  margin: 37px 57px;
  transform-style: preserve-3d;
  transition-timing-function: ease-in-out;
  transition-duration: 0.57s;
  perspective: 800px;
}

.front,
.back {
  position: absolute;
  width: 100%;
  height: 100%;
  vertical-align: top;
  border-radius: 16px;
  cursor: default; /* just for knowledge, remeber to delete.*/
  overflow: hidden;/* adding the attribute at father positon;*/
  background-color: #cdc9c3;
  transform: translateZ(1px);
}

.back {
  opacity: 0.97;
  text-align: center;
  transform: rotateY(180deg) translateZ(0);
}

.flipped {
  transform: rotateX(7deg) rotateY(180deg);
}
					/*卡片內容*/
.image {
  flex: 1;
  margin: 0 auto;
}

.image img {
  position: relative;
  margin: 0 auto;
  height: 430px;
  width: 100%;
  object-fit: cover;
  border-radius: 16px 16px 2px 2px;
}

.heading {
  margin: 17px 0 0 0;
  color: black;
  font-variant: small-caps;
  font-size: x-large;
  font-weight: bold;
  font-family: 'Rosarivo', cursive;
  text-align: center;
}

.caption {
  margin: 7px auto;
  font-size: 120%;
  font-family: 'Rosarivo', cursive;
  overflow-wrap: break-word;
}

.details {
  margin: 7px auto;
  overflow-wrap: break-word;
}
					/*ABOUT & CONCACT*/
table {
  display: flex;
  flex: 1;
  box-sizing: border-box;
  text-align: start;
  margin: 17px auto;
  border-collapse: collapse;
}

tr,
th,
td {
  text-align: left;
  padding: 7px 0;
  font-variant: small-caps;
  font-size: 120%;
}

td {
  padding: 0 900px 0 0;
  }

#rotate-me {
  float: right;
  width: 170px;
  height: 170px;
}

.footer {
  margin: 0 17%;
}

.footer a {
  text-decoration: underline;
} 

a:hover {
  opacity: 0.8;
}

@media(max-width: 767px) {
  font-size: 14px;
  .card {
  	display: block;
	margin: 17px auto;
	height: 424px;
	width: 300px;
}
  .front .back {
        height: 424px;
	width: 300px;
}
  .image img {
  	height: 308px;
	width: 300px;
	}
}


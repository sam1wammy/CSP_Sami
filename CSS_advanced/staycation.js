function revel() {
  if (document.getElementById("hidden").style.display === "block") {
    document.getElementById("hidden").style.display = "none";
  } else {
    document.getElementById("hidden").style.display = "block";
  }
}

function show() {
  document.getElementById("hidden-image").src = "https://www.sltrib.com/resizer/v2/2HIN4IQHDJBRBMUVWPO3ZATB4A.jpg?auth=3f105088e9ee2f959b613b49b39f6778fc882260ce8f004a0e0c71b43793ef80"
  document.getElementById("second image").innerHTML = "image from The Salt Lake Tribune"
}
function hide() {
  document.getElementById("hidden-image").src = "https://dynamic-media-cdn.tripadvisor.com/media/photo-o/1d/76/9a/7f/caption.jpg?w=300&h=300&s=1"
   document.getElementById("second image").innerHTML = "image from TripAdvisor"
}
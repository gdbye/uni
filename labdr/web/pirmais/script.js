var modal = document.getElementById("modal");

document.getElementById('music').addEventListener('submit', function(event) {
  event.preventDefault(); 

  const formData = new FormData(this);
  const selectedValue = formData.get('music'); 
  
  modal.style.display = "none";
  });




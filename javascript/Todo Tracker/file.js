console.log('Server is running on port 3000');
var todoHeader = document.getElementById('title-header');
todoHeader.textContent = 'My Todo Tracker';
document.querySelector('li').textContent = 'Wake up';
var input = document.getElementById('user-todos');
// input.textContent = 'Sleep';
var list = document.querySelector('ul');
// list.appendChild(input);
document.getElementById("clerAll").addEventListener('click', function(){
    console.log("You have clicked the button")
})
document.querySelector('form').addEventListener('submit', function(e){
    e.preventDefault();
    console.log(input.value);
})
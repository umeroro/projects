console.log('Server is running on port 3000');
var todoHeader = document.getElementById('title-header');
todoHeader.textContent = 'My Todo Tracker';
document.querySelector('li').textContent = 'Wake up';
var todo = document.getElementsByClassName('todos')[0];
todo.textContent = 'Sleep';
var list = document.querySelector('ul');
list.appendChild(todo);
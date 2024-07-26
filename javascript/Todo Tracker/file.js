var form = document.querySelector('form');
var todosList = document.querySelector('ul');
var button = document.getElementById('clerAll');
var input = document.getElementById('taskInput');
// var todosArray = [];
var todosArray = localStorage.getItem('task') ? JSON.parse(localStorage.getItem('task')) : [];

localStorage.setItem('task', JSON.stringify(todosArray));
var storage = JSON.parse(localStorage.getItem('task'));

form.addEventListener('submit', function(e){
    e.preventDefault();
    todosArray.push(input.value);
    localStorage.setItem('task', JSON.stringify(todosArray));
    todoMaker(input.value);
    input.value = '';
})

var todoMaker = function(task){
    var todo = document.createElement('li');
    todo.textContent = task;
    todosList.appendChild(todo);
}

for(var i=0; i< storage.length; i++){
    todoMaker(storage[i]);
}

button.addEventListener('click', function(){
    localStorage.clear();
    while(todosList.firstChild){
        todosList.removeChild(todosList.firstChild);
    }
})
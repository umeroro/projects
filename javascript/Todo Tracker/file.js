var form = document.querySelector('form');
var todosList = document.querySelector('ul');
var button = document.getElementById('clerAll');
var input = document.getElementById('taskInput');

form.addEventListener('submit', function(e){
    e.preventDefault();
    todoMaker(input.value);
    input.value = '';
})

var todoMaker = function(task){
    var todo = document.createElement('li');
    todo.textContent = task;
    todosList.appendChild(todo);
}

button.addEventListener('click', function(){
    while(todosList.firstChild){
        todosList.removeChild(todosList.firstChild);
    }
})
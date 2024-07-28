var cardsarray = [
    { 'name': 'color-pencil' , 'img': 'https://images.pexels.com/photos/230514/pexels-photo-230514.jpeg?auto=compress&cs=tinysrgb&w=600'},
    { 'name': 'globe' , 'img': 'https://images.pexels.com/photos/1236421/pexels-photo-1236421.jpeg?auto=compress&cs=tinysrgb&w=600'},
    { 'name': 'books' , 'img': 'https://images.pexels.com/photos/4690297/pexels-photo-4690297.jpeg?auto=compress&cs=tinysrgb&w=600'},
    { 'name': 'chess' , 'img': 'https://images.pexels.com/photos/4973821/pexels-photo-4973821.jpeg?auto=compress&cs=tinysrgb&w=600'},
    { 'name': 'glitter' , 'img': 'https://images.pexels.com/photos/4690307/pexels-photo-4690307.jpeg?auto=compress&cs=tinysrgb&w=600'},
    { 'name': 'computer' , 'img': 'https://images.pexels.com/photos/5082556/pexels-photo-5082556.jpeg?auto=compress&cs=tinysrgb&w=600'}
];

var game = document.getElementById('game-board');
var grid = document.createElement('section');
grid.setAttribute('class', 'grid')
game.appendChild(grid);
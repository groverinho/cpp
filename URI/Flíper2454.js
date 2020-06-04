const fs = require('fs'); 
var input = fs.readFileSync('Flíper2454.txt', 'utf8');
var lines = input.split('\n');
var array = lines.shift().split(" ");
var p = array[0];
var r = array[1];
if(p==='0'){
console.log('C')
} else if(r==='0') {
console.log('B')
} else {
	console.log('A');
}
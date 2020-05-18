const fs = require('fs'); 
var input = fs.readFileSync('galopeira.txt', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift(),10);
while(n>0){
	var word = lines.shift();
	console.log((word.length/100).toFixed(2))
	n--;
}
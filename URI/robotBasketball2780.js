const fs = require('fs'); 
var input = fs.readFileSync('robotBasketball2780.txt', 'utf8');
var lines = input.split('\n');
var d = parseInt(lines.shift(),10);
if(d<=800) {
	console.log(1)
}
else if(d<=1400) {
	console.log(2)
} else {
	console.log(3)
}

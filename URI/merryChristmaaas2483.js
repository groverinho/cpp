const fs = require('fs'); 
var input = fs.readFileSync('merryChristmaaas2483.txt', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift(),10);
var word = "Feliz nat";
for (var i = 0; i < n; i++) {
	word = word.concat("a");
}

console.log(word.concat("l!"));
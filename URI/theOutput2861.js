const fs = require('fs'); 
var input = fs.readFileSync('theOutput2861.txt', 'utf8');
var lines = input.split('\n');

var cases = parseInt(lines.shift(),10);
//console.log(cases)
for (var i = 0; i < cases; i++) {
//	console.log(lines.shift());
lines.shift();
	console.log("gzuz");
}
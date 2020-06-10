const fs = require('fs'); 
var input = fs.readFileSync('bean2791.txt', 'utf8');
var lines = input.split('\n');

var c = lines.shift().split(" ");
if(c[0]==="1"){
	console.log(1);
} else if(c[1]==="1"){
	console.log(2);
} else if(c[2]==="1"){
	console.log(3);
} else {
	console.log(4);
}
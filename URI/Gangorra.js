const fs = require('fs'); 
var input = fs.readFileSync('Gangorra.txt', 'utf8');
var lines = input.split('\n');

var array = lines.shift().split(" ");
var P1=parseInt(array[0],10), C1=parseInt(array[1],10), P2=parseInt(array[2],10), C2=parseInt(array[3],10);
if((P1*C1)===(P2*C2)){
	console.log(0);	
} else if((P1*C1)>(P2*C2)){
	console.log(-1);	
} else if((P1*C1)<(P2*C2)){
	console.log(1);	
}

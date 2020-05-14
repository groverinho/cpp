const fs = require('fs'); 
var input = fs.readFileSync('BuildingHouses1541.txt', 'utf8');
var lines = input.split('\n');


while(true){
	var abc = lines.shift().split(" ");
	var a = parseInt(abc[0],10);
	if(a === 0 ) break;
	var b = parseInt(abc[1],10);
	var c = parseInt(abc[2],10);
	var area = (a * b * 100.0) / c;
	console.log(Math.floor(Math.sqrt(area)) );
}
const fs = require('fs'); 
var input = fs.readFileSync('twoBills2140.txt', 'utf8');
var lines = input.split('\n');
var array = [100 ,50,20,10,5,2];

while(true){
	var nm = lines.shift().split(" ");
	var n = parseInt(nm[0],10);
	var m = parseInt(nm[1],10);
	if(n === 0 || m === 0 ) break;
	var cambio=m-n;
	var i = 0, c=0 ;
	while(cambio>0 && i<=5){
		if(cambio>=array[i]){
			c++;
			cambio-=array[i];
		}
		i++;
	}
	if(cambio===0 && c>=2)	console.log("possible");
	else	console.log("impossible");
}
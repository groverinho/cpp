var n = +readline();
var teams={};
for (var i = 0; i < n; i++) {
	var element = readline();
	if(teams[element]){
		teams[element] +=1;
	} else {
		teams[element]=1;
	}
}
print(
	teams[Object.keys(teams)[0]] > (teams[Object.keys(teams)[1]]|| 0)
	 ? Object.getOwnPropertyNames(teams)[0]
	 : Object.getOwnPropertyNames(teams)[1]
	 );

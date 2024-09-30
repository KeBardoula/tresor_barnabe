#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	int barnabe = 0;
	char * mv = ">><><><<>>><<><><<<<<>><><>>>><><<><<>>>><<<><<>><<<<<>><<<<<<<<<>><>>><>><>>><<<<>>>>><>>><<><<><><><>>>>>>><<><<<<<>>><<<>><<<>>><<<<<<<<<<<<<<<>>>><<><><>>>>>>>>><>><>>><>>>>>>>><<><<>>>>";
	int i;

	int len = strlen(mv);

	for (i = 0; i < len; i++){
		if(mv[i] == '<'){
			barnabe = barnabe - 1;
		} else {
			barnabe = barnabe + 1;
		}
	}

	printf("Barnabé est là : %d\n", barnabe);
	
	exit(0);
}
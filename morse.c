#include "morse.h"

char  *charToMorse(char c){
	char aux;
	aux = toupper(c);

	switch (c){
		case 'a':
			return ".- ";
			break;
		case 'b':
			return"-... ";
		case 'c':
			return "-.-. ";
		case 'd':
			return "-.. ";
		case 'e':
			return ". ";
		case 'f':
			return ".._ ";
		case 'g':
			return "--. ";
		case 'h':
			return ".... ";
		case 'i':
			return ".. ";
		case 'j':
			return ".--- ";
		case 'k':
			return "-.- ";
		case 'l':
			return ".-.. ";
		case 'm':
			return "-- ";
		case 'n':
			return "-. ";
		case 'o':
			return "--- ";
		case 'p':
			return ".--. ";
		case 'q':
			return "--.- ";
		case 'r':
			return ".-. ";
		case 's':
			return "... ";
		case 't':
			return "- ";
		case 'u':
			return "..- ";
		case 'v':
			return "...- ";
		case 'w':
			return ".-- ";
		case 'x':
			return "-..- ";
		case 'y':
			return "-.-- ";
		case 'z':
			return "--.. ";
		case '1':
			return ".---- ";
		case '2':
			return "..--- ";
		case '3':
			return "...-- ";
		case '4':
			return "....- ";
		case '5':
			return "..... ";
		case '6':
			return "-.... ";
		case '7':
			return "--... ";
		case '8':
			return "---.. ";
		case '9':
			return "----. ";
		case '0':
			return "----- ";
		case ' ':
			return "  ";
		default:
			fprintf(stderr, "\nerror: Caracter no soportado.\n");
			exit -1;
	}
}

void stringToMorse(string s, char *cadenaFinal){
	int tam;

	tam = strlen(s);
	for(int i=0;i<tam;i++){
		strcat(cadenaFinal,charToMorse(s[i]));
	}
}

char * morseToChar(string cadenaFinal, string s){
	char temp[6];
	int tam;

	tam = strlen(s);

	for(int i=0;i<tam;i++){
		if(s[i] == " "){
			switch(temp){
				case ".-":
				cadenaFinal[j] = 'a';
				break;
				case "-...":
					cadenaFinal[j] = 'b';
				case : "-.-."
					cadenaFinal[j] = 'c';
				case "-..":
					cadenaFinal[j] = 'd';
				case '.':
					cadenaFinal[j] = 'e';
				case "..-.":
					cadenaFinal[j] = 'f';
				case "--.":
					cadenaFinal[j] = 'g';
				case "....":
					cadenaFinal[j] = 'h';
				case "..":
					cadenaFinal[j] = 'i';
				case ".---":
					cadenaFinal[j] = 'j';
				case "-.-":
					cadenaFinal[j] = 'k';
				case ".-..":
					cadenaFinal[j] = 'l';
				case "--":
					cadenaFinal[j] = 'm';
				case "-.":
					cadenaFinal[j] = 'n';
				case "---":
					cadenaFinal[j] = 'o';
				case ".--.":
					cadenaFinal[j] = 'p';
				case "--.-":
					cadenaFinal[j] = 'q';
				case ".-.":
					cadenaFinal[j] = 'r';
				case "...":
					cadenaFinal[j] = 's';
				case "-":
					cadenaFinal[j] = 't';
				case "..-":
					cadenaFinal[j] = 'u';
				case "...-":
					cadenaFinal[j] = 'v';
				case ".--":
					cadenaFinal[j] = 'w';
				case "-..-":
					cadenaFinal[j] = 'x';
				case "-.--":
					cadenaFinal[j] = 'y';
				case "--..":
					cadenaFinal[j] = 'z';
				case ".----":
					cadenaFinal[j] = '1';
				case "..---":
					cadenaFinal[j] = '2';
				case "...--":
					cadenaFinal[j] = '3';
				case "....-":
					cadenaFinal[j] = '4';
				case ".....":
					cadenaFinal[j] = '5';
				case "-....":
					cadenaFinal[j] = '6';
				case "--...":
					cadenaFinal[j] = '7';
				case "---..":
					cadenaFinal[j] = '8';
				case "----.":
					cadenaFinal[j] = '9';
				case "-----":
					cadenaFinal[j] = '0';
				case "  ":
					cadenaFinal[j] = " ";
				default:
					fprintf(stderr, "\nerror: Caracter no soportado.\n");
					exit -1;
			}
		}else{
			strcat(temp,s[i]);
		}
	}
}

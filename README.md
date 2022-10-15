# APP-C-openweathermap
APP C openweathermap


ça c'est une APP développé en C pour recuperer la meteo de la ville de Lyon.


vous pouvez l'executer avec la commande:

 gcc -Wall -g main.c -o main -lcurl -ljson-c -lmysqlclient $(mysql_config --libs) 
 and
./main


il pfaut pas oublier changer en struct.h les coordonées de votre BDD

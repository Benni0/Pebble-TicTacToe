# Pebble-TicTacToe
##Projektbeschreibung
In diesem Projekt wird das Spiel Tic-Tac-Toe für die Pebble Watch entwickelt.
Tic-Tac-Toe benötigt zwei Spieler, wobei in der App, der Computer die Rolle des zweiten Spielers übernimmt.
Jeder der beiden Spieler hat ein Zeichen (X und 0), welches abwechselnd auf einem quadratischen, 3x3 Felder großen Spielfeld platziert wird. Der Spieler, der als Erster sein Zeichen in eine Zeile, Spalte oder Diagonale setzen Kann gewinnt. Wenn dies keinem der Spieler gelingt, kommt es zu einem Unentschieden.
##Abgrenzung
-Es wird kein Spieler gegen Spieler Modus implementiert.
-Der Computer wird nicht unbesiegbar sein.
##Bots
Es werden drei verschiedene Bots (Spiel-Roboter) implementiert, wobei jeder Bot eine eigene Schwierigkeitsstufe hat.
###Drunken Bot
Der Drunken Bot wählt mittels Zufallsgenerator ein freies Feld.
###Defence Bot
Der Defence Bot verteidigt sich im Gegensatz zum Drunken Bot. Wenn der Gegner bereits zwei Felder in einer Reihe gewählt hat und das dritte Feld noch frei ist, wählt der Defence Bot dieses Feld um zu verhindern, dass der Gegner gewinnt. Wenn das jedoch auf mehr als eine Reihe zutrifft (Dreieck), dann Kann der Defence Bot nur eine der Reihen verteidigen. Wenn es jedoch auf keine Reihe zutrifft, funktioniert der Defence Bot gleich wie der Drunken Bot.
###Intelligent Bot
Der Intelligent Bot funktioniert gleich wie der Defence Bot, jedoch mit der Erweiterung, dass er zuerst überprüft ob es bereits eine Reihe gibt, mit der er in einem Zug gewinnen kann. Wenn es eine solche Reihe gibt, vervollständigt er diese und gewinnt. Der Intelligent Bot ist nicht unbesiegbar.
##Windows
Für dieses Spiel werden die folgenden vier Fenster in der aufgeführten Reihenfolge verwendet.
###Splash Window
Das Splash Window ist das erste Fenster das sofort nach dem Starten angezeigt wird. Auf diesem wird der Text "Tic Tac Toe" dargestellt. Dieses Fenster verschwindet nach 1,5 Sekunden von selbst.
###Instruction Window
Das Instuction Window wird nach dem Splash Window angezeigt und beinhaltet eine Bedienungsanleitung für das Spiel.
Dieses Fenster muss mittels Select Taste bestätigt werden. Wenn das geschehen ist, wird das "Botselect Window" angezeigt.
###Botselect Window
Das Botselect Window beinhaltet eine Liste mit den auswählbaren Bots. Der Spieler kann mittels UP und DOWN Buttons einen Bot auswählen. Wenn der Spieler einen Bot ausgewählt hat wird das "Game Window"  angezeigt.
###Game Window
Das Game Window beinhaltet das Spielfeld und eine Statusleiste, in der steht welcher Spieler wie oft gewonnen hat.
Hier kann der Spieler ein Feld mittels UP und DOWN Buttons auswählen und mit dem SELECT Button bestätigen.
Dadurch wird sein Zeichen in dem Feld angezeigt. Es sind nur freie Felder wählbar.

Beim Start des Spiels ist kein Feld ausgewählt. In diesem Zustand kann der Spieler durch drücken des SELECT Buttons den Computer anweisen den ersten Zug zu machen. Der Computer zieht immer unmittelbar nach dem Zug des Spielers.

Wenn einer der Spieler gewinnt, werden die ausschlaggebenden Felder durch eine Linie markiert. Wenn ein Spiel zu ende ist, entweder durch ein Unentschieden oder durch das Gewinnen eines Spielers, ist die Auswahl eines Feldes nicht mehr möglich. In diesem Zustand kann mittels drücken des SELECT Buttons ein neues Spiel gestartet werden.

Das Spiel kann jederzeit durch drücken des BACK Buttons beendet werden.

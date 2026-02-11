# Robot-Challenge
# Description
Ce projet implémente un système interactif de scoring pour un parcours à l’aide d’un microcontrôleur (ESP32 ou Arduino compatible) et de capteurs digitaux.
Le robot ou joueur passe par différents capteurs représentant des étapes (HADH, ANUB, KBAR, CHAMS, SPIDER, FIN), et le système attribue un score en fonction du chemin choisi.

Des boutons de contrôle permettent de démarrer le parcours, de disqualifier un participant ou de passer à l’étape suivante. Les données sont simulées et affichées sur le moniteur série.


# Objectifs
-Suivre le passage d’un robot/joueur à travers plusieurs capteurs

-Calculer un score total basé sur les chemins choisis


# Technologies utilisées

*Arduino / ESP32 / Wokwi (simulation possible)

*Microcontrôleur avec entrées digitales

*Moniteur série pour affichage des scores et du temps


# Fonctionnement
1.Le participant appuie sur SUIVANT pour démarrer le parcours.

2.Le système surveille les capteurs pour déterminer le chemin choisi et attribuer des points :

HADH : 10 points

ANUB : 10 ou 20 points

KBAR : 20 ou 30 points

CHAMS : 10, 20 ou 30 points

SPIDER : 20 ou 30 points

FIN : 10 points

3.Le bouton DISQ permet de disqualifier le participant à tout moment.

4.À la fin du parcours ou en cas de disqualification, le système affiche le score et le temps total sur le moniteur série.

# Auteur

Ranim Mili – Projet de suivi et scoring interactif pour robot / parcours capteurs


# pushswap

Le but du projet était de créer un programme qui trie une listes de nombres avec le moins d'opérations et le plus rapidement. On avait un nombre limité d'opération sur deux listes (l_a et l_b) qui sont :

- sa
  échange les deux premiers éléments de l_a (rien ne se passera s'il n'y a pas assez d'éléments).
- sb
  échange les deux premiers éléments de l_b (rien ne se passe s'il n'y a pas assez d'éléments).
- sc
  sa et sb en même temps.
- pa
  prend le premier élément de l_b et le déplace à la première position de la liste l_a (rien ne se passera si
  l_b est vide).
- pb
  prend le premier élément de l_a et le déplace à la première position de la liste l_b (rien ne se passera si
  l_a est vide).
- ra
  fait pivoter l_a vers le début, le premier élément deviendra le dernier.
- rb
  fait pivoter l_b vers le début, le premier élément devient le dernier.
- rr
  ra et rb en même temps.
- rra
  Faites pivoter l_a vers la fin, le dernier élément devient le premier.
- rrb
  faites pivoter l_b vers la fin, le dernier élément deviendra le premier.
- rrr
  rra et rrb en même temps.

Pour ma part, j'ai choisi de trier la liste grâce à du radix binaire, des listes chainée et les opérations ra, pa et pb.
Le projet a duré 3 semaines et était en solo.

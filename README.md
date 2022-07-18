<h1 align="center">Décompostion LU et Résolution d'un système d'équation linéaire</h1>
<p align="center">
Le code ci dessus vous permet de faire la decomposition LU d'une matrice carrée. Il vous permet également d'éffectuer la résolution d'un système d'équation linéaires. 
</p>
<p align="center">
En effet supposons qu'on est le système d'équation suivant:
</p>
<div align="center" style="display:flex;justify-content:center;align-items:center;">
        <div align="center" style="margin-right:15px;color: blue; font-weight: bold;">
                (S):
        </div>
        <div align="center">
            <p align="center">
              <span align="center" style="color: blue">X1</span> + 2<span align="center" style="color: blue">X2</span> + 3<span align="center" style="color: blue">X3</span> + 4<span align="center" style="color: blue">X4</span> = 11 ;
            </p>
            <p align="center">
                2<span align="center" style="color: blue">X1</span> + 3<span align="center" style="color: blue">X2</span> + 4<span align="center" style="color: blue">X3</span> + <span align="center" style="color: blue">X4</span> = 12 ;
            </p>
            <p align="center">
                3<span align="center" style="color: blue">X1</span> + 4<span align="center" style="color: blue">X2</span> + <span align="center" style="color: blue">X3</span> + 2<span align="center" style="color: blue">X4</span> = 13 ;
            </p>
            <p align="center">
                4<span align="center" style="color: blue">X1</span> + <span align="center" style="color: blue">X2</span> + 2<span align="center" style="color: blue">X3</span> + 3<span align="center" style="color: blue">X4</span> = 14 ;
            </p>
        </div>
</div>

<p align="center">
    On obtient après d'éduction les matrices suivantes:
</p>
<p align="center">La matrice A</p>
<div align="center" style="display:flex;justify-content:center;align-items:center;margin-top:25px;">
    <div align="center" style="margin-right:15px;color: blue; font-weight: bold;">
                [A]:
    </div>
     <div align="center">
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">1</span>
              <span align="center" style="color: blue; margin: 25px">2</span>
              <span align="center" style="color: blue; margin: 25px">3</span>
              <span align="center" style="color: blue; margin: 25px">4</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">2</span>
              <span align="center" style="color: blue; margin: 25px">3</span>
              <span align="center" style="color: blue; margin: 25px">4</span>
              <span align="center" style="color: blue; margin: 25px">5</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">3</span>
              <span align="center" style="color: blue; margin: 25px">4</span>
              <span align="center" style="color: blue; margin: 25px">1</span>
              <span align="center" style="color: blue; margin: 25px">2</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">4</span>
              <span align="center" style="color: blue; margin: 25px">1</span>
              <span align="center" style="color: blue; margin: 25px">2</span>
              <span align="center" style="color: blue; margin: 25px">3</span>
            </p>
        </div>
</div>
<p align="center">La matrice B</p>
<div align="center" style="display:flex;justify-content:center;align-items:center;margin-top:25px;">
    <div align="center" style="margin-right:15px;color: blue; font-weight: bold;">
                [B]:
    </div>
     <div align="center">
            <div align="center" style="display:flex;flex-direction:column;justify-content:center;align-items:center;">
              <span align="center" style="color: blue;">11</span>
              <span align="center" style="color: blue;">12</span>
              <span align="center" style="color: blue;">13</span>
              <span align="center" style="color: blue;">14</span>
            </div>
        </div>
</div>
<p align="center">
On entre alors les matrices A et B dans notre programme et on obtient la sortie suivante:
</p>
<p align="center">
La matrice L est la suivante
</p>
<div align="center" style="display:flex;justify-content:center;align-items:center;margin-top:25px;">
    <div align="center" style="margin-right:15px;color: blue; font-weight: bold;">
                [L]:
    </div>
     <div align="center">
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">1</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">2</span>
              <span align="center" style="color: blue; margin: 25px">1</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">3</span>
              <span align="center" style="color: blue; margin: 25px">2</span>
              <span align="center" style="color: blue; margin: 25px">1</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">4</span>
              <span align="center" style="color: blue; margin: 25px">7</span>
              <span align="center" style="color: blue; margin: 25px">-1</span>
              <span align="center" style="color: blue; margin: 25px">1</span>
            </p>
        </div>
</div>
<p align="center">
La  matrice U est la suivante:
</p>
<div align="center" style="display:flex;justify-content:center;align-items:center; margin-top:25px;">
    <div align="center" style="margin-right:15px;color: blue; font-weight: bold;">
                [U]:
    </div>
     <div align="center">
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">1</span>
              <span align="center" style="color: blue; margin: 25px">2</span>
              <span align="center" style="color: blue; margin: 25px">3</span>
              <span align="center" style="color: blue; margin: 25px">4</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">-1</span>
              <span align="center" style="color: blue; margin: 25px">-2</span>
              <span align="center" style="color: blue; margin: 25px">-7</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">-4</span>
              <span align="center" style="color: blue; margin: 25px">4</span>
            </p>
            <p align="center">
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">0</span>
              <span align="center" style="color: blue; margin: 25px">40</span>
            </p>
        </div>
</div>
<p align="center">
La solution Y de l'équation ly=B est la suivante:
</p>
<div align="center" style="display:flex;justify-content:center;align-items:center; margin-top:25px;">
    <span align="center" style="color: blue; margin-right: 25px">[Y]:</span>
    <span align="center" style="color: blue; margin-right: 25px">11</span>
    <span align="center" style="color: blue; margin-right: 25px">-10</span>
    <span align="center" style="color: blue; margin-right: 25px">0</span>
    <span align="center" style="color: blue; margin-right: 25px">40</span>
</div>
<p align="center">
La solution X du système d'équation linéaire (S) est la suivante:
</p>
<div align="center" style="display:flex;justify-content:center;align-items:center; margin-top:25px;">
    <span align="center" style="color: blue; margin-right: 25px">[X]</span>
    <span align="center" style="color: blue; margin-right: 25px">2</span>
    <span align="center" style="color: blue; margin-right: 25px">1</span>
    <span align="center" style="color: blue; margin-right: 25px">1</span>
    <span align="center" style="color: blue; margin-right: 25px">1</span>
</div>


<p align="center">
    A la fin  vous obtenez les matrices de décompositions [L] et [U] mais également les solutions X et Y respectives des équations Ux=y et Ly=b; où X est également la solution finale du Système d'équation (S);
</p>
<p align="center">
    Le projet se trouve dans la branche master
</p>
<p align="center">
        Merci pour l'attention!!
</p>

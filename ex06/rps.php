<?Php
$a = readline('Choose rock, paper, or scissors: ');
while ($a != 'rock' && $a != 'paper' && $a != 'scissors')
   $a = readline('Choose rock, paper, or scissors: ');
$i = rand(1,3);
if ($i == 1)
    $choice = 'rock';
elseif ($i == 2)
    $choice = 'paper';
else
    $choice = 'scissors';

if ($a == 'rock' && $choice == 'scissors' || $a == 'paper' && $choice == 'rock' || $a == 'scissors' && $choice == 'paper')
    echo "Congratulations! You won! The computer chose ".$choice.".";
elseif ($a == $choice)
    echo"Draw, The computer chose ".$choice.".";
else
    echo "Sorry, you lost. The computer chose ".$choice.".";
?>
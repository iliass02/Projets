<html>
  <body>
    <head>
      <meta charset="utf-8" />
      <title>My Little Graphic</title>
    </head>
    <h1 align="center">My Little Graphic</h1>

   <SPAN style="position: absolute; top: 50 px; left: 550px";>

<form method="post" action="fonction.php">
   <label for="fonction">fonction f(x) =</label>
   <input type="number" name="formule_a"<p> <?php echo 'x² + '; ?><input type="number" name="formule_b"<p> <?php echo 'x + '; ?><input type="number" name="formule_c"</p>
        <input type="submit" value="Envoyer" />
</form>
    <form method="post" action="suite_geo.php">
   <label for="suite">suite geometrique : uo =</label>
			   <input type="number" name="suite_a"<p> <?php echo 'raison q= '; ?><input type="number"name="suite_b"<p>
<input type="submit" value="Envoyer" />
</form>
<form method="post" action="suite_ari.php">
   <label for="suite">suite arithmetique : uo =</label>
			   <input type="number" name="suite_c"<p> <?php echo 'raison q= '; ?><input type="number"name="suite_d"<p>
    <input type="submit" value="envoyer" />
</form>
<form method="post" action="suite_fibo.php">
        <input type="submit" value="Suite Fibonacci" />
</form>

  <svg width="500" height="500">
  <rect width="500" height="500" style="fill:rgb(29,234,228);stroke-width:3;stroke:rgb(0,0,0)" />
   <?php $color = "rgba(0, 0, 0, 0.7)"; ?>
      <line x1="250" x2="250" y1="0" y2="500" style="stroke:<?php echo $color; ?>;stroke-width:1" />
      <line y1="250" y2="250" x1="0" x2="500" style="stroke:<?php echo $color; ?>;stroke-width:1" />
    </svg>
    </form>
 </SPAN>
    </table>
  </body>
</html>
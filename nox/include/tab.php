<?php
// tab.php for  in /home/marcho_i/projects/Projet_No-X/marcho_i/nox
// 
// Made by MARCHOUD Iliass
// Login   <marcho_i@etna-alternance.net>
// 
// Started on  Fri Nov  7 11:17:46 2014 MARCHOUD Iliass
// Last update Mon Nov 10 10:13:05 2014 MARCHOUD Iliass
//

if (isset($argv[1]) && isset($argv[2]))
  {
    if (is_file($argv[1]) && is_file($argv[2]))
      {
	if (is_readable($argv[1]) && is_readable($argv[2]))
	  {
	    $filename = $argv[1];
	    $contents = file_get_contents($filename);
	    $tab=explode(" ",$contents);
	    $filename2 = $argv[2];
	    $contents2 = file_get_contents($filename2);
	    $dico=explode(" ",$contents2);
	  }
      }
  }
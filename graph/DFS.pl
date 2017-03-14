@D = ([ 0, 1,99,99,99, 1,99,99,99],
      [-1, 0, 1,99,99,99, 1,99, 1],
      [-1,-1, 0, 1,99,99,99,99, 1],
      [-1,-1,-1, 0, 1,99, 1, 1, 1],
      [-1,-1,-1,-1, 0, 1,99, 1,99],
      [-1,-1,-1,-1,-1, 0, 1,99,99],
      [-1,-1,-1,-1,-1,-1, 0, 1,99],
      [-1,-1,-1,-1,-1,-1,-1, 0,99],
      [-1,-1,-1,-1,-1,-1,-1,-1, 0]
	);

my @visited;
my $level;

sub initMatrix
{
	for $v (0..$#D){
	  for $w (0..$v-1){
	    $D[$v][$w] = $D[$w][$v];
	    #$P[$v][$w] = $w;
	  }
	}
}

sub DFS
{
	my $i = shift;
    $level++;
    my $indent = '-'x$level;
	print "$indent in $i\n";
	$visited[$i] = 1;
	for my $j (0..$#D){
		if ($D[$i][$j] == 1){
			if (!$visited[$j]){
			    print "$indent $i -> $j Go\n";
				DFS($j);
			}else{
			    print "$indent $i -> $j is visited\n";
			}
		}
	}
	print "$indent back from $i\n";
	$level--;
}

sub DFSTraverse
{
	for my $i (0..$#D){
		$visited[$i] = 0;
	}
	for my $i (0..$#D){
		if (!$visited[$i]){
			DFS($i);
		}
		
	}
}

initMatrix();
DFSTraverse();
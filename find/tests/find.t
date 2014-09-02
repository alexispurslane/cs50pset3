Setup:

  $ make $TESTDIR/../vigenere
  .* (re)
  $ alias vig="$TESTDIR/../vigenere"


Encrypts "a" as "a" using "a" as keyword:
  $ echo a | vig a
  a

Encrypts "world, say hello!" as "xoqmd, rby gflkp!" using "baz" as keyword:
  $ echo "world, say hello!" | vig baz
  xoqmd, rby gflkp!

Encrypts "BaRFoo" as "CaQGon" using "BaZ" as keyword:
  $ echo "BaRFoo" | vig BaZ
  CaQGon

Encrypts "BARFOO" as "CAQGON" using "BAZ" as keyword:
  $ echo "BARFOO" | vig BAZ
  CAQGON

Handles lack of argv[1]:
  $ echo "BLEH" | vig
  .* (re)
  [1]

Handles argc > 2:
  $ echo "BLEH" | vig baz bar foo
  .* (re)
  [1]

Rejects "Hax0r2" as keyword:
  $ echo "BLALLLAL" | vig Hax0r2
  .* (re)
  [1]


# dwmblocks
Modular status bar for dwm written in c.

# Modifying dwmblocks
The statusbar is made from text output from scripts found in my [local/bin/bar](https://github.com/aimon1337/dotfiles/tree/master/local/bin/bar).  Blocks are added and removed by editing the blocks.h header file.

# To get my dwmblocks to work for you...
You will, of course, need my dwmblocks build and my scripts in [local/bin/bar](https://github.com/aimon1337/dotfiles/tree/master/local/bin/bar).  Make sure that local/bin/bar is in your $PATH otherwise you can't call those scripts by name which is what I'm doing in blocks.h.  Instead, you'd have to write out the full path to each script in the blocks.h.

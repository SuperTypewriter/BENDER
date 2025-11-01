So, here it is, the superrrrbender! 
This is based off an old smith corona typewriter and I think that all the "quiet" and smart models (goodness, it is so charming and quaint. If you have one,
press the function key, and Z, and it'll give you a walkthrough, oh my gosh!)
Anywho, to use this, you'll need an arduino, 2 H bridges, a smith corona typewriter (electric of course), some patience, to learn how to make music with
the format I made, and, uh, more patience.

You'll have to identify the motor's wires (that part's simple.)
and wire it so that whenever a "thwack" happens it of course drives the head forward then backward. 
Then, for the stepper motor (the kick) you'll have to identify the two coils (ignore the midpoint. it is being driven as bipolar.)
and wire them so that they are on the H bridge as coil 1 and coil 2, input 1 and 2 being on and off for coil 1 and 2 and 4 being on and off for 2 respectively.
Finally, you can use the power supply the printer comes with, and attach that to the 12v side of the H bridges (yes it is safe. remove the 5v jumper though.)
make the H bridges share a common ground with the arduino, and power them both by the arduino. (again, REMOVE THE 5V JUMPER)

zzzhhheennnn.... 

make your music! configure the timing to your liking and make it following my genius amazing non-criticizable language of sorts
1 = kick
2 = snare (uh, I hope this is right. I'm not good at this)
empty line = ur preset delay time

boom. there u go. there's your very own bender *tm*


the input file has some gibberish for you to see how it works
So, here it is, the superrrrbender! 
This is based off an old smith corona typewriter and I think that all the "quiet" and smart models 
![A smith corona 600 series typewriter](https://www.smithcorona.com/blog/wp-content/uploads/2017/01/Smith_Corona_Spell-Right_Dictionary_SL600.jpg)
(goodness, it is so charming and quaint. If you have one,
press the function key, and Z, and it'll give you a walkthrough, oh my gosh!)

Why I made this, well, is a little enigmatic. I guess I just liked the noise! I used to have this when I was quite young and in some troublesome situations. I'd type absolute just gibberish on it because it was quite cool to see it write out my whims and desires and, well, the sound stuck with me. I'd had this laying around and so I decided that what better thing to do with it than to turn it into a beat machine? 

Anywho, to use this, you'll need an arduino, 2 H bridges, a smith corona typewriter (electric of course), some patience, to learn how to make music with
the format I made, and, uh, more patience.
![Stuff you need](https://github.com/SuperTypewriter/BENDER/blob/main/IMG_9017.jpg?raw=true)
You'll have to identify the motor's wires (that part's simple.)
and wire it so that whenever a "thwack" happens it of course drives the head forward then backward. 
Then, for the stepper motor (the kick) you'll have to identify the two coils (ignore the midpoint. it is being driven as bipolar.)
and wire them so that they are on the H bridge as coil 1 and coil 2, input 1 and 2 being on and off for coil 1 and 2 and 4 being on and off for 2 respectively.
Finally, you can use the power supply the printer comes with, and attach that to the 12v side of the H bridges after putting it through a full wave rectifier (yes it is safe. remove the 5v jumper though.)
make the H bridges share a common ground with the arduino, and power them both by the arduino. (again, REMOVE THE 5V JUMPER)
inputs 1 and 2 on the type head go to 6 and 7, inputs 1 2 3 and 4 on the stepper go to 2, 3, 4, and 5. 
![A crude setup for the 'thwacker'](https://github.com/SuperTypewriter/BENDER/blob/main/IMG_8345.jpg?raw=true)
zzzhhheennnn.... 

make your music! configure the timing to your liking and make it following my genius amazing non-criticizable language of sorts
1 = kick
2 = snare (uh, I hope this is right. I'm not good at this)
empty line = ur preset delay time

boom. there u go. there's your very own bender *tm*



the input file has some gibberish for you to see how it works






This project was made with mostly all things I had laying about, besides the 2 H bridges :3 


#Pokemon Battle
This is a program that makes Pikachu shake using a Sine wave as his motion. 



This is the code that makes him shake

        float xPos = ofMap(sin(ofGetElapsedTimef()*200), -1, 1, 430, 440);
        image3.draw(xPos, 150, 150,150);
    }

![Screen Shot 2015-04-27 at 5.41.22 PM.png](/Users/austinkelley/Documents/Developer/of_v0.8.4_osx_release/apps/myApps/pokemonParty/Assets/Screen Shot 2015-04-27 at 5.41.22 PM.png)

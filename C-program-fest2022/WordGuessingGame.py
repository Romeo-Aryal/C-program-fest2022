# Simple Word Guessing Game implemented using Python
import random as rdm  

print("Best of luck for the game ahead!")     
words = ['tanishq', 'pegasus', 'tanmay', 'program','python', 'language', 'chess', 'cricket'
          ,'delhi', 'spaceship', 'bus', 'flight','c++','dubai', 'heaven','google',
          'lucknow','good', 'boy','girl', 'uttarpradesh','google','microsoft','amazon','meta']  
word = rdm.choice(words)
print("You have",len(word),"guesses left!")
print ("The masked word to be guessed is:")
turns = len(word)  
guesses= ''

while turns > 0:
    failed = 0  
    for char in word:  
        if char in guesses:  
            print(char)  
        else:  
            print("*", end='')    
            failed += 1  
    if failed == 0:  
        print("User Wins !!")  
        print("The correct word under mask is: ", word)  
        break  
    guess = input("\n Enter a guess character(in lowercase):")  
    guesses += guess  
    if guess not in word:  
        turns -= 1         
        print("Wrong Guess")          
        print("You have ", + turns, 'more guesses ')             
        if turns == 0:  
            print("User Looses !!")  

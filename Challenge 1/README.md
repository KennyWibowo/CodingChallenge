# Challenge 1!

## Background
Oh no! Carson wants to watch his favorite League of Legends players get rekt on Twitch.tv, but there's so many games and so little time!

To help out Carson a bit, we will do our best to develop an algorithm that will maximize the number of full games he gets to watch back to back.

However, Carson has no preference on watching SKT get stomped by paiN versus watching Isabull win worlds against CLG.

Carson also doesn't mind waiting a bit between each match, or switching immediately after a match, and doesn't mind watching at any time, so long as he gets his fill of quality League of Legends.

Carson won't drop watching a match, no matter what, and will watch from start to finish.

## Description

Given input of:

A text file, containing in each line
- a matchup name, followed by in CSV format:
- the number of games in the matchup
- the day of the week of starting time (in integer format, 0 = Sunday, 1 = Tuesday, 2 = Wednesday...)
- the starting time (in Military time, 0-2400)
- the day of the week of ending time (assuming we're prescient and know when the games end)
- the ending time (also in Military time)

Create a function that outputs an array of the 

For example,

```
SKT vs paiN,3,0,500,0,800
TSM vs Team8,5,0,799,0,801
ISABULL vs CLG,3,0,800,0,1100
```

Will output

```
{"SKT vs paiN","ISABULL vs CLG"}
```

## Have fun!
Remember, this is solely for your learning experience. Talk to me if you need help with starting, and make sure to plan out your code before actually coding.

### Fastest Submission: n/a
### Most Efficient Solution (in Real Time): n/a
### Cleanest Code: n/a

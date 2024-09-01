# Prismforce ASDE algorithm test

## Project Description
This project involves solving a complex problem inspired by the story of Abhimanyu in the Chakravyuha. The goal is to develop an algorithm that determines whether Abhimanyu can successfully cross all 11 circles guarded by enemies and reach the Pandavas' army.

## Objective
To create an algorithm that simulates Abhimanyu's journey through the Chakravyuha, taking into account various constraints such as enemy power levels, Abhimanyu's ability to skip fights, and the possibility of recharging his power. The algorithm will determine whether Abhimanyu can defeat or bypass all enemies and escape the Chakravyuha.

## Problem Statement
Imagine Abhimanyu in the Chakravyuha. There are 11 circles in the Chakravyuha, each guarded by a different enemy. Abhimanyu starts in the innermost circle and must cross all 11 circles to reach the Pandavas' army.

### Given:
- **Enemy Powers**: Each circle is guarded by an enemy with power levels `k1, k2, ..., k11`.
- **Initial Power**: Abhimanyu starts with an initial power `p`.
- **Skips (a)**: Abhimanyu can skip fighting an enemy up to `a` times.
- **Recharges (b)**: Abhimanyu can recharge his power up to `b` times.
- **Battle Consequence**: Engaging in battle with an enemy will reduce Abhimanyu's power by the enemy's power level.
- **Defeat Condition**: If Abhimanyu's power is less than the enemy's power upon entering a circle, he will lose the battle.
- **Special Enemies**: Enemies at `k3` and `k7` have the ability to regenerate with half of their initial power and can attack Abhimanyu again if he is battling in the next circle.

### Objective:
Design an algorithm to determine whether Abhimanyu can successfully navigate through all 11 circles of the Chakravyuha and test it with two sets of test cases.

## Test Cases
### Test Case 1:
- **Abhimanyu power (p)**: 4
- **Enemy Powers**: `[4 ,5, 6, 7, 8, 9, 10, 11, 12, 3, 1]`
- **Skiptime (a)**: 9
- **Recharges (b)**: 0
- **Expected Outcome**: Yes, Abhimanyu can cross Chakravyuh
- **Explanation**: Abhimunya will skip first 9 cicle enemy, and then kill 10 and 11 circle enemy
here , abhimanyu can kill the first circle enemy also, first then abhimanyu need to skip 2 to 10 for that case abhimanyu cant reach at
chakravyuh, because the power = 0, and recharge = 0,
### Test Case 2:
- **Abhimanyu power (p)**: 3
- **Enemy Powers**: `[2, 1, 2, 1, 1, 1, 2, 12, 13, 12, 4]`
- **Skiptime (a)**: 3
- **Recharges (b)**: 2
- **Expected Outcome**: Not, possible
- **Explanation**:- Abhimanyu can't reach at chakravyu. Because, he need to skip 8,9,10 circle so no remain skip time.Now, he can kill 1,2,3,4,5,6 circle
after that, he has power = 0,rechargetime = 0,skip = 0.So, abhimanyu will lose the battle.
## Explanation
The algorithm should evaluate Abhimanyu's power as he progresses through each circle. It must consider the impact of skips and recharges, and account for the regenerating enemies at `k3` and `k7`. The algorithm's success criterion is whether Abhimanyu can reach the final circle with enough power to defeat or bypass the last enemy.

## Conclusion
This project demonstrates the application of algorithmic problem-solving to a classical scenario from mythology. By simulating Abhimanyu's journey through the Chakravyuha, the project highlights the importance of strategy, resource management, and decision-making in overcoming complex challenges.

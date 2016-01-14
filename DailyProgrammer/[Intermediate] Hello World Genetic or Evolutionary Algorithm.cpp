
for all members of population
    sum += fitness of this individual
end for
    
for all members of population
    probability = sum of probabilities + (fitness / sum)
    sum of probabilities += probability
end for
    
loop until new population is full
     do this twice
         number = Random between 0 and 1
       for all members of population
           if number > probability but less than next probability 
                then you have been selected
       end for
     end
     create offspring
end loop

# Chapter 1 #

## Exercise 1 ##

__Hardware resources:__

1. Printers
2. Hard drives
3. CPUs
4. Cellular Antenaes
5. Scanners

__Software/Data resources:__
6. Documents
7. File Editors
8. Databases
9. Videos
10. Streams


__Their Use:__
1. In an office, every department may have a common printer.
2. Having servers where all members of the team save data.
3. In research projects, where different teams run different 
benchmarks on the same server.
4. Many people are served by each Cellular Antenae.
5. Same as in 1.
6. Sharing documents on the cloud with Dropbox etc.
7. Using Google Docs to create a document collaboratively.
8. When shopping from Amazon, many people use the same database of items.
9. Watching videos on Youtube.
10. Live streaming a football game.


## Excercise 2 ##

If we know the delay of the network, then it is easy to synchronize 
the clock. Another way would be that at a specific point at the 
excecution of the code, the two computers would record the time + the time
that the excecution of the code has taken so far in total. One of them
would send those data to the other and the other would do the needed
calculations to identify the clock skew between them, calculating the 
speed of each computer in the equation.

On the first idea, the limiting factor is the changes in network speed
depending on traffic.
On the second idea, the limiting factor is how well the speed of each CPU
can be calculated, as well as any other proccesses that interfer with the 
computation time.

The second idea could be used on any computers, as it is not based on the
speed of the network by sending data about the type of the CPU in each 
computer. Still the calculation would have a lot of accuracy problems and 
there would need to exist a master computer that according to it the clock 
is set.








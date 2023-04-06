input <- file('stdin', 'r')

a <- as.double(readLines(input, n=1))
calc <- format(round(3.14159 * (a^2), 4), nsmall = 4);
write(gsub(" ", "", paste("A=",calc)),'');
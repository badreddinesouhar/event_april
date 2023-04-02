#!/usr/bin/perl
print "Enter a string: ";
my $input = <STDIN>;
chomp($input);
my $reverse = reverse($input);
if($input eq $reverse){
    print "The string is a palindrome!\n";
}else{
    print "The string is not a palindrome.\n";
}
# Language: C++
# Input: TXT
# Output: TXT
# Tested with: PluMA 1.0, GCC 4.8.4

Sequence Clustering with Interpolated Markov Models (Kelley and Salzberg, 2010).

The plugins takes as input a TXT file of keyword-value pairs, whitespace-delimited:
inputfile: FASTA file of sequences
numclusters: Number of clusters

The plugin will output a TXT file mapping every sequence label to a cluster number 
(0 to numclusters-1).

This plugin includes some files from the SCIMM software package, available open-source
on the following site:
http://www.cbcb.umd.edu/software/scimm/

SCIMM is available under the Artistic License, available under scimm/LICENSE.

SCIMM source files have been slightly modified, summarized by two main changes:
1. Removed generation of tmp folders
2. Added an "outfile" parameter

HMP_MOCK sequence set was taken from the MiSeqSop pipeline (Kozich et al, 2013).


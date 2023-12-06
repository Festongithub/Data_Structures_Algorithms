#!/usr/bin/python3

TF = 7
print("FN    FP  TP    pre      acc   rec  f1")
for FN in range(0, 7):
    for FP in range(0, FN+1):
        TP = 100 - FN - FP  - TF
        precision  = TP  / (TP + FP)
        accuracy  = (TP  + TN) / (TP  + TN + FP + FN)
        recall = TP / (TP + FN)
        ff1_score =  2 * precision * recall  / (precision + recall)

        print(f"{FN:6.2f}{FP:6.2f}{TP:6.2f}", end="")
        print(f"{precision:6.2f}{accuracy:6.2f}{recall:6.2f}{f1_score:6.2f}")


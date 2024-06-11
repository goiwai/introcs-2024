# Performance Evaluation of Introduction to Computational Science 2024

Create the programs to submit a DAG job into the KEKCC using the _Job Array_ feature of LSF.

- Based on the [`B5-array-job.sh`](../job-and-task/lsf/geant4/B5-array-job.sh) and [`add-histograms-100.C`](../job-and-task/lsf/geant4/add-histograms-100.C), students may create a DAG job like:
  - Build the B5 application as an initialisation job
  - _Job Array_ consists of 100 elements of B5 applications
  - Each element of the _Job Array_ generates 1,000 events
  - Pileup the ROOT objects of 100,000 events job results in total as a finalisation job
- **Grants +1** for modifying and submitting existing your own programs instead of Geant4 Basic Example 5 (B5) above.

Fork the repository first: Go to <https://github.com/goiwai/introcs-2024/fork>, then click the button "Create fork".

Secondly, clone it to your local system, then work further like:

```shell
git clone git@github.com:<your-account>/introcs-2024.git
cd introcs-2024/report

# You can create a even develop branch
# Create your report

git commit
git push

# Open a pull request with target branch to main
```

All the materials must be stored under the directory [`report`](../report/). **Grants +1** each if `Makefile` or `CMakeLists.txt` is provided.

## Report

The report must be written in English or Japanese with 11 points or larger fonts for one or more pages of A4 paper. Any file format is acceptable, but **+1 is granted** if the report is created in LaTeX.

The report should describe how and what you have achieved in the assignment above.

The report should include either one of the OOP keywords, such as _Object and Class_, _Encapsulation_, _Inheritance_, or _Polymorphism_. **Earn +1** if it includes all.

Also, the report may contain a special effort for something worthwhile. **Earn +1** if it is valuable.

## Submission Procedure

Once you are ready to submit the report to be reviewed, open a Pull Request (PR) to the `main` as a target branch, the due is: **Saturday, August 31st, 2024, End of Day, Anywhere on Earth (AoE)**.

## Evaluation Policy

The course grade will be granted either A, B, C, or D. If the report takes +2 or more extra points, the qualified grade A, and +1 and 0 go B and C, respectively. If there is no PR request before the due date, students may receive a grade of D.

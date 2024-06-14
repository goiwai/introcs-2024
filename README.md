# Introduction to Computational Science 2024 <!-- omit in toc -->

The course aims to encourage students to understand the fundamental concepts of computer architecture and network communication. Students will also study programming principles through the computational simulation and calculation program required mainly for high-energy and nuclear physics. One or more lecturers help learners with hands-on lessons throughout the course.

- [Learning Objectives](#learning-objectives)
- [External Resources](#external-resources)
- [Performance Evaluation](#performance-evaluation)
  - [Report](#report)
  - [Submission Procedure](#submission-procedure)
  - [Grading Policy](#grading-policy)

## Learning Objectives

Computer engineering is an essential part of experimental physics and is actively utilised to achieve research goals. Lecturers will give a basic introduction to Computational Science, which can be applied to the heart of experimental physics, such as data analysis, online/offline and distributed computing. The course program could be optimised for students and aims at students with prior programming experiences such as Python, C++, and Java, but not mandatory.

## External Resources

The course schedule and lecture notes can be retrieved: <https://wiki.kek.jp/display/~iwai/Introduction+to+Computational+Science+2024>

## Performance Evaluation

Create the programs to submit a DAG job into the KEKCC using the _Job Array_ feature of LSF.

For example, based on the [`B5-array-job.sh`](job-and-task/lsf/geant4/B5-array-job.sh) and [`add-histograms-100.C`](job-and-task/lsf/geant4/add-histograms-100.C), students may create a DAG job like:

- Build the B5 application as an initialisation job
- _Job Array_ consists of 100 elements of B5 applications
- Each element of the _Job Array_ generates 1,000 events
- Pileup the ROOT objects of 100,000 events job results in total as a finalisation job

Students may submit existing programs instead of the example above and **Grants +1** consequently.

Fork the repository first: Go to <https://github.com/goiwai/introcs-2024/fork>, then click "Create fork" on the top right.

Secondly, clone it to his/her local system, then work further like:

```shell
git clone git@github.com:<account>/introcs-2024.git
cd introcs-2024/report

# Maybe better to work within a develop branch
# Create your report

git commit
git push

# Open a pull request with target branch to main
```

All the materials must be stored under the directory [`report`](report/). **Grants +1** each if `Makefile` or `CMakeLists.txt` is provided. Which might suggest him/her to create the report in LaTeX.

### Report

The report must be written in English or Japanese with 11 points or larger fonts for one or more pages of A4 paper. Any file format is acceptable.

The report should describe how and what he/she has achieved in the assignment above.

The report may contain, for example:

- Performance evaluation: DAG job VS single job
- Propositions for further performance improvement
- Special efforts for something worthwhile.

Also, **earn +1** if the report discussed something with keywords that appeared throughout the course, such as Object and Class, Encapsulation, Inheritance, or Polymorphism.

### Submission Procedure

Once a student is ready to submit the report to be reviewed, open a Pull Request (PR) to the `main` as a target branch. The due date is: **Saturday, August 31st, 2024, at the End of the Day, Anywhere on Earth (AoE)**.

### Grading Policy

The course grade will be granted either A, B, C, or D. If the report takes +2 or more extra points, the qualified grade A, and +1 and 0 go B and C, respectively. If there is no PR request before the due date, students may receive a grade of D.

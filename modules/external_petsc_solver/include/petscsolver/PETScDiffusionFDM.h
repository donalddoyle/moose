#ifndef PETSCDIFFUSIONFDM_H
#define PETSCDIFFUSIONFDM_H

#include "libmesh/libmesh.h" // Real, LIBMESH_HAVE_PETSC

#ifdef LIBMESH_HAVE_PETSC

#include <petscdm.h>
#include <petscdmda.h>
#include <petscts.h>

PETSC_EXTERN PetscErrorCode externalPETScDiffusionFDMSolve(TS, Vec, PetscReal, PetscReal);
PETSC_EXTERN PetscErrorCode PETScExternalSolverCreate(MPI_Comm, TS *);
PETSC_EXTERN PetscErrorCode PETScExternalSolverDestroy(TS);
PETSC_EXTERN PetscErrorCode FormIFunction(TS, PetscReal, Vec, Vec, Vec, void *);
PETSC_EXTERN PetscErrorCode FormIJacobian(TS, PetscReal, Vec, Vec, PetscReal, Mat, Mat, void *);
PETSC_EXTERN PetscErrorCode FormInitialSolution(TS, Vec, void *);

#endif

#endif /* PETSCDIFFUSIONFDM_H */

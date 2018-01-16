# libs-prototype
Experimental repo for git-Atmel integration

## Directory structure
The whole repository should correspond to a single Atmel solution containing projects used on the pod. Each project is either a static library or an executable application to be run by one of the MCUs on the pod. Each project is contained in a separate folder.

Folder "docs" should include documentation of relevant subsystems. Documentation includes datasheets of MCUs, sensors, and other IO devices, as well as documents describing functionality of hardware agnostic subsystems, i.e. libraries. Documentation should further include programming guides and styles. This is to give all programmers a single point of reference.

## MCU mapping
TODO: put a table here with mapping from Node id to function. Also indicate the MCU type for each node.

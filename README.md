# URSA

Welcome to the repository of the URSA project. URSA is an environment for creating, building and simulating multiprocessed, computing systems platforms.

The following sections may serve you as tour on the project. Note that the project is in constant evolution! So, feel free to contact us regarding the development of URSA.

## The Anatomy of URSA

The URSA environment is composed of some subprojects. Each of these subprojects generate a component to the environment. 

![Components of URSA and their interaction.](https://github.com/andersondomingues/ursa/blob/master/web-client/figs/URSA.png?raw=true)

- MODELS: Models are functional implementations of hardware's behaviour, that is, its C++ code that emulates the hardware. Still, it is cycle accurate and very useful for fast-programming when targeting embedded platforms. Platforms are composed of several interconnected hardware models. Models can be reused in many plataforms and have their own documentation.

- PLATFORMS: Platforms are made of peripherals, busses, processors and other hardware. We are currently working on integrating both the HF-RISCV processor and peripherals from the HEMPS project onto a single platform. More information on HF-RISCV and HEMPS projects can be found in the [external contribution](#external-contribution) section. 

- SIMULATOR: The discrete event simulator component is the heart of simulation. It instantiates a queue in which events from hardware are scheduled and executed in-order. URSA provides cycle-precise simulation.

- SOFTWARE: Non-kernel related software ready to be deployed to various platforms. Includes benchmarks, middlewares, and applications. Also includes abstracting layers for deploying software to different systems.

- WEB-CLIENT: Real-time monitoring system that allows the visualization of models through a web browser. For instance, one may want to watch registers changing their values during systems' execution, just for fun. Also, it is possible to control the simulation through the interface.

## Requirements and Running an Example

- Tested with ``GNU Make 4.1`` and ``gcc version 6.3.0``, with ``Debian 6.3.0-18+deb9u1``. Additional compilers (or configuration) for targeting simulated CPUs are also required. 

- Example are available at ``platforms`` directory. You can specify which example to run by editing ``./platforms/Makefile``. Then, call ``make`` from projects' root directory.

## Documentation

Available documentation should be deployed to the ``/docs`` directory. Documentation is intentionally deployed in PDF. No needs to explain why. No documentation will be available until the first release to avoid rewriting.

## Roadmap

First release dated to "just after we integrate the HF-RISCV processor and peripherals from the HEMPS project onto a single platform". Until them, all commits will be pushed to the main branch without any warrant of being stable. In other words, the code may not work properly, or not even work at all.

![#1589F0](https://placehold.it/15/00ee15/000000?text=+) `For now, the model for Hermes' Network Router is stable. The routing algorithm is XY, with Wormhole. The hardware is modeled using buffers so that both credit-based and handshake procotols can be simulated. Unlimited buffers are also supported and can be used for bypassing network congestion.`

## Versioning

Releases will be tagged and branched/forked and should be referenced as ``URSA ver. MAJOR.MINOR DATE COMMIT_ID``. An example should be ``URSA ver. 1.01 July 28 51375aa``.

## External contribution

This projects uses software (and hardware) from other projects. 

- HF-RISCV. The hf-riscv processor is maintained by Sergio Johann (sjohann81). More information on his work can be found at [his repository](https://github.com/sjohann81/hf-risc). 

- HEMPS (and HERMES). The HEMPS project is maintened by the GAPH group. More information on their work can be found at [their website](http://www.inf.pucrs.br/hemps/getting_started.html). Content used within URSA project comes from [their repository](https://github.com/GaphGroup/hemps). Note that HERMES is part of the HEMPS projects and should be available at the same repository.

## Licensing

See ``LICENSE.MD`` for details. 


## Contact

Any of the contributors of this repository. For now, I ([andersondomingues](https://github.com/andersondomingues)) am the only contributor to this project. Feel free to [mail me](mailto:ti.andersondomingues@gmail.com).

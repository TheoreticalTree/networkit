/*
 * METISGraphWriter.h
 *
 *  Created on: 30.01.2013
 *      Author: Christian Staudt (christian.staudt@kit.edu)
 */

#ifndef GMLGRAPHWRITER_H_
#define GMLGRAPHWRITER_H_

#include <fstream>

#include "GraphWriter.h"

namespace NetworKit {

/**
 * Writes a graph and its coordinates as a GML file.[1]
 *
 * [1] http://svn.bigcat.unimaas.nl/pvplugins/GML/trunk/docs/gml-technical-report.pdf
 */
class GMLGraphWriter: public NetworKit::GraphWriter {
public:
	GMLGraphWriter() = default;

	/**
	 * write a graph G and its coordinates to a GML file.
	 *
	 * @param[in]	G		Graph of type NetworKit with 2D coordinates
	 * @param[in]	path	path to file
	 */
	virtual void write(Graph& G, const std::string& path) override;
};

} /* namespace NetworKit */
#endif /* GMLGRAPHWRITER_H_ */
